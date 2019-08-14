//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

@class NSLayoutConstraint, PXPeopleDetailStatusOverlayView, RDFace, RDPerson, RDVersion;

@interface IPXPeopleDetailStatusViewController : UXViewController
{
    RDVersion *_version;
    RDPerson *_person;
    RDFace *_keyFace;
    PXPeopleDetailStatusOverlayView *_overlayView;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) PXPeopleDetailStatusOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) RDFace *keyFace; // @synthesize keyFace=_keyFace;
@property(retain, nonatomic) RDPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) RDVersion *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (struct CGPoint)normalizedCropCenterForKeyFace:(id)arg1 targetSize:(struct CGSize)arg2;
- (struct CGRect)cropRectForRectOfInterest:(struct CGRect)arg1 originalAspectRatio:(double)arg2 cropAspectRatio:(double)arg3;
- (void)setupOverlayViewWithImage:(id)arg1 containerView:(id)arg2;
- (void)viewDidLoad;
- (id)initWithPerson:(id)arg1;

@end

