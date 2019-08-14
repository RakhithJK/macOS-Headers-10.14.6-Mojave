//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

#import <MapKit/MKMultiLineLabelContainer-Protocol.h>

@class MKImageView, NSBox, NSDate, NSImage, NSLayoutConstraint, NSString, _MKUILabel;

@interface MKTransitIncidentSummaryCell : MKTableViewCell <MKMultiLineLabelContainer>
{
    _MKUILabel *_titleLabel;
    _MKUILabel *_summaryLabel;
    _MKUILabel *_startedLabel;
    MKImageView *_iconImageView;
    NSBox *_separator;
    NSLayoutConstraint *_separatorHeightConstraint;
    NSDate *_startDate;
}

@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)multilineTextFieldsWithinContainer;
- (void)viewDidMoveToWindow;
- (double)_hairlineViewHeight;
- (void)_updateStartLabel;
@property(retain, nonatomic) NSImage *icon;
@property(copy, nonatomic) NSString *summary;
@property(copy, nonatomic) NSString *title;
- (void)setConstraints;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

