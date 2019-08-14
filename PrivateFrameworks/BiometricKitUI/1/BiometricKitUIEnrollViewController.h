//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <BiometricKitUI/BiometricKitDelegate-Protocol.h>

@class BiometricKit, NSMutableDictionary, NSString;
@protocol BiometricKitUIEnrollResultDelegate, MBSecondPartyHost;

@interface BiometricKitUIEnrollViewController : NSViewController <BiometricKitDelegate>
{
    NSMutableDictionary *_properties;
    id <MBSecondPartyHost> _titleDelegate;
    BiometricKit *_biometricKit;
    id <BiometricKitUIEnrollResultDelegate> _delegate;
}

@property(nonatomic) id <BiometricKitUIEnrollResultDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BiometricKit *biometricKit; // @synthesize biometricKit=_biometricKit;
@property(nonatomic) id <MBSecondPartyHost> titleDelegate; // @synthesize titleDelegate=_titleDelegate;
- (void).cxx_destruct;
- (void)restartEnroll;
- (void)cancelEnroll;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

