#import <Foundation/Foundation.h>
#import "MTContext.h"
#import "MTProto.h"
#import "MTDatacenterAddressSet.h"
#import "MTDatacenterAddress.h"
#import "MTRequestMessageService.h"
#import "MTKeychain.h"
#import "TelegramSerialization.h"
#import "TGUpdateMessageService.h"
#import "MTQueue.h"
@interface MTNetwork : NSObject<MTContextChangeListener>

+ (MTNetwork *)instance;
-(void)initConnectionWithId:(NSInteger)dc_id;
-(void)sendRequest:(RPCRequest *)request;
-(void)sendRequest:(RPCRequest *)request forDatacenter:(int)datacenterId;
-(void)sendRandomRequest:(RPCRequest *)request;
-(MTDatacenterAuthInfo *)authInfoForDatacenter:(int)dc_id;
-(MTKeychain *)keyChain;
-(void)successAuthForDatacenter:(int)dc_id;
-(BOOL)isAuth;
-(void)drop;
-(int)getTime;
-(int)currentDatacenter;
-(void)setDatacenter:(int)dc_id;
-(void)cancelRequest:(RPCRequest *)request;

- (TGUpdateMessageService *)updateService;

-(void)startNetwork;

-(MTContext *)context;

-(void)update;

-(MTQueue *)queue;

-(void)updatePasscode:(NSData *)md5Hash;
-(BOOL)checkPasscode:(NSData *)md5Hash;
-(BOOL)passcodeIsEnabled;


id dispatch_in_time(int time, dispatch_block_t callback);
void remove_global_dispatcher(id internalId);

@end
