//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VSErrorRecoveryOption : NSObject
{
    BOOL _destructive;
    NSString *_localizedAlertButtonTitle;
    CDUnknownBlockType _attemptHandler;
}

@property(nonatomic, getter=isDestructive) BOOL destructive; // @synthesize destructive=_destructive;
@property(copy, nonatomic) CDUnknownBlockType attemptHandler; // @synthesize attemptHandler=_attemptHandler;
@property(copy, nonatomic) NSString *localizedAlertButtonTitle; // @synthesize localizedAlertButtonTitle=_localizedAlertButtonTitle;
- (void).cxx_destruct;

@end

