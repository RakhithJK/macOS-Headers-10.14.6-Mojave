//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AKController, AKSignatureCameraCaptureViewController_Mac, AKSignatureGestureCaptureViewController_Mac, NSSegmentedControl, NSView;
@protocol AKSignatureCaptureViewControllerDelegate;

@interface AKSignatureCaptureViewController_Mac : NSViewController
{
    long long _captureMode;
    AKSignatureCameraCaptureViewController_Mac *_cameraCaptureController;
    AKSignatureGestureCaptureViewController_Mac *_trackpadCaptureController;
    id <AKSignatureCaptureViewControllerDelegate> _delegate;
    AKController *_controller;
    NSSegmentedControl *_segmentedControl;
    NSView *_captureViewHolder;
}

+ (BOOL)isTrackpadAvailable;
+ (BOOL)isCameraAvailable;
+ (BOOL)isSignatureCaptureAvailable;
@property(retain) NSView *captureViewHolder; // @synthesize captureViewHolder=_captureViewHolder;
@property(retain) NSSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property __weak id <AKSignatureCaptureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setupTrackpadCapture;
- (void)_setupCameraCapture;
- (void)_switchToCaptureMode:(long long)arg1;
- (void)_showPreferredCaptureViewMode:(id)arg1;
- (void)teardown;
- (void)segmentedValueDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;

@end

