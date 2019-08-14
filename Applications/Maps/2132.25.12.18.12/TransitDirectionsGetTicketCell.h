//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TransitDirectionsIconCell.h"

@class NVInlineButton;
@protocol TransitDirectionGetTicketCellDelegate;

__attribute__((visibility("hidden")))
@interface TransitDirectionsGetTicketCell : TransitDirectionsIconCell
{
    NVInlineButton *_getTicketsButton;
    id <TransitDirectionGetTicketCellDelegate> _delegate;
}

@property(nonatomic) __weak id <TransitDirectionGetTicketCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NVInlineButton *getTicketsButton; // @synthesize getTicketsButton=_getTicketsButton;
- (void).cxx_destruct;
- (void)_getTicketButtonTapped:(id)arg1;
- (void)configureWithItem:(id)arg1;
- (id)_initialConstraints;
- (void)_createSubviews;

@end
