//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface NVReportAProblemTextFieldCell : NSTextFieldCell
{
    BOOL _userDidStartEditing;
    NSString *_defaultString;
    NSTextField *_titleTextField;
}

@property(nonatomic) __weak NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(copy, nonatomic) NSString *defaultString; // @synthesize defaultString=_defaultString;
- (void).cxx_destruct;
- (void)showRequiredPlaceholder;
- (void)clean;
- (void)textDidChange:(id)arg1;
- (void)awakeFromNib;

@end

