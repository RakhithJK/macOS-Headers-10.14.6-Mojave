//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RTTUtilities/NSObject-Protocol.h>

@class AVCVirtualTTYDevice, NSError;

@protocol AVCVirtualTTYDeviceDelegate <NSObject>
- (void)device:(AVCVirtualTTYDevice *)arg1 didReceiveText:(struct NSString *)arg2;
- (void)device:(AVCVirtualTTYDevice *)arg1 didReceiveCharacter:(unsigned short)arg2;
- (void)deviceDidStop:(AVCVirtualTTYDevice *)arg1;
- (void)device:(AVCVirtualTTYDevice *)arg1 didStart:(BOOL)arg2 error:(NSError *)arg3;
@end

