#import <Foundation/Foundation.h>

#import <SSignalKit/SSignalKit.h>
#import "MTContext.h"

@interface MTDiscoverConnectionSignals : NSObject

+ (SSignal *)discoverSchemeWithContext:(MTContext *)context addressList:(NSArray *)addressList media:(bool)media;

@end
