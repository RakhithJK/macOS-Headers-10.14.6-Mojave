//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSSet, _UIKBRTTouchDrifting;

@protocol _UIKBRTTouchDriftingDelegate
- (struct CGPoint)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 touchCenterForFingerID:(unsigned long long)arg2;
- (NSSet *)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 touchIdentifiersForFingerID:(unsigned long long)arg2;
- (unsigned long long)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 fingerIDFortouchIdentifier:(id)arg2;
- (void)_uikbrtTouchDriftingStateChanged:(_UIKBRTTouchDrifting *)arg1;
@end

