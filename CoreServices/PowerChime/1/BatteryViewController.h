//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class BUIViewController, NSImageView, NSTextField;

@interface BatteryViewController : NSViewController
{
    float _currentCapacity;
    NSImageView *_imageView;
    NSTextField *_label;
    BUIViewController *_batteryUIController;
}

@property float currentCapacity; // @synthesize currentCapacity=_currentCapacity;
@property(retain) BUIViewController *batteryUIController; // @synthesize batteryUIController=_batteryUIController;
@property(retain) NSTextField *label; // @synthesize label=_label;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)_update:(BOOL)arg1;
- (void)viewDidLoad;

@end
