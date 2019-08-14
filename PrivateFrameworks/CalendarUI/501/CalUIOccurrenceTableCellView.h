//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class EKEvent, NSArray, NSImage, NSImageView, NSLayoutConstraint, NSTextField;

@interface CalUIOccurrenceTableCellView : NSTableCellView
{
    EKEvent *_event;
    NSArray *_detailsFields;
    NSImageView *_dotImageView;
    NSTextField *_titleField;
    NSImage *_dotImage;
    NSImage *_selectedDotImage;
    NSLayoutConstraint *_dotLeadingConstraint;
}

@property(retain) NSLayoutConstraint *dotLeadingConstraint; // @synthesize dotLeadingConstraint=_dotLeadingConstraint;
@property(retain) NSImage *selectedDotImage; // @synthesize selectedDotImage=_selectedDotImage;
@property(retain) NSImage *dotImage; // @synthesize dotImage=_dotImage;
@property(retain) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain) NSImageView *dotImageView; // @synthesize dotImageView=_dotImageView;
@property(retain) NSArray *detailsFields; // @synthesize detailsFields=_detailsFields;
@property(retain) EKEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)effectiveEndDate;
- (BOOL)isSuggestedEvent;
- (BOOL)isMultiDayEvent;
- (id)suggestionString;
- (id)clarifyTimeZoneIfNecessary:(id)arg1 timeString:(id)arg2 date:(id)arg3;
- (id)clarifyTimeZone:(id)arg1 timeString:(id)arg2 date:(id)arg3;
- (id)bottomTimeFieldString;
- (id)topTimeFieldString;
- (id)dateAndTimeStringForDate:(id)arg1 inTimeZone:(id)arg2 clarifyTimeZoneIfNecessary:(BOOL)arg3;
- (id)dateStringForDate:(id)arg1;
- (id)dotImageSelected:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)updateTitleFontIsSelected:(BOOL)arg1;
- (void)updateConstraints;
- (id)initWithEvent:(id)arg1 hideDateField:(BOOL)arg2 hideTimeField:(BOOL)arg3 hideLocationField:(BOOL)arg4 hideAttendeeField:(BOOL)arg5 occurrenceType:(unsigned long long)arg6;
- (id)initWithEvent:(id)arg1 hideDateField:(BOOL)arg2 hideTimeField:(BOOL)arg3 hideLocationField:(BOOL)arg4 hideAttendeeField:(BOOL)arg5;
- (id)initWithEvent:(id)arg1;

@end

