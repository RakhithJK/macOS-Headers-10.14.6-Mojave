//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VirtualDisplayServer : NSObject
{
    unsigned int _serverRPC_port;
}

- (int)spawnProxyWithVendorID:(unsigned int)arg1 productID:(unsigned int)arg2 serialNum:(unsigned int)arg3 name:(id)arg4 widthInMillimeters:(double)arg5 heightInMillimeters:(double)arg6 maxPixelsWide:(unsigned int)arg7 maxPixelsHigh:(unsigned int)arg8 rx:(double)arg9 ry:(double)arg10 gx:(double)arg11 gy:(double)arg12 bx:(double)arg13 by:(double)arg14 wx:(double)arg15 wy:(double)arg16 clientHandler_port:(unsigned int)arg17 proxyPRC_port:(unsigned int *)arg18 displayID:(unsigned int *)arg19;
- (void)dealloc;
- (id)init;

@end

