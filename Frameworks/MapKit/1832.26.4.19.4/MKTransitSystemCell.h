//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

#import <MapKit/MKMultiLineLabelContainer-Protocol.h>

@class MKImageView, NSImage, NSLayoutConstraint, NSString, _MKUILabel;

@interface MKTransitSystemCell : MKCustomSeparatorTableViewCell <MKMultiLineLabelContainer>
{
    MKImageView *_shieldImageView;
    _MKUILabel *_systemLabel;
    NSLayoutConstraint *_imageToLabelConstraint;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *systemName;
@property(retain, nonatomic) NSImage *systemArtwork;
- (id)multilineTextFieldsWithinContainer;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

