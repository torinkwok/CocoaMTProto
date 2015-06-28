//
//  TLEncryptedChat+Extensions.h
//  Telegram P-Edition
//
//  Created by keepcoder on 25.12.13.
//  Copyright (c) 2013 keepcoder. All rights reserved.
//

#import "TLSchema.h"

@interface TLEncryptedChat (Extensions)
-(TLUser *)peerUser;
-(NSString *)title;
-(TLChatPhoto *)photo;
-(TLInputEncryptedChat *)inputPeer;
@end
