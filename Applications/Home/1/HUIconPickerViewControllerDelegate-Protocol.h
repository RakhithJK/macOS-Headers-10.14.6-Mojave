//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HUIconPickerViewController;
@protocol HFIconDescriptor;

@protocol HUIconPickerViewControllerDelegate <NSObject>
- (void)iconPicker:(HUIconPickerViewController *)arg1 didPickIconDescriptor:(id <HFIconDescriptor>)arg2;
- (void)iconPickerDidCancel:(HUIconPickerViewController *)arg1;
@end

