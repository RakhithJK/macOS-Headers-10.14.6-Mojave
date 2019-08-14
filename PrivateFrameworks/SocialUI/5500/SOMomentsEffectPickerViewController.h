//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SocialUI/SOEffectPickerViewController.h>

#import <SocialUI/SOFullScreenMomentDelegate-Protocol.h>

@class NSString, SOFullScreenMoment;

@interface SOMomentsEffectPickerViewController : SOEffectPickerViewController <SOFullScreenMomentDelegate>
{
    SOFullScreenMoment *_moment;
}

@property(retain, nonatomic) SOFullScreenMoment *moment; // @synthesize moment=_moment;
- (void).cxx_destruct;
- (void)previewFullScreenMoment:(id)arg1;
- (void)fullScreenMomentDidStopAnimating:(id)arg1;
- (void)fullScreenMomentWillStartAnimating:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

