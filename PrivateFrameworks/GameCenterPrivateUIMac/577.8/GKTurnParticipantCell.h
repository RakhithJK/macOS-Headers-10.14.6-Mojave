//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKBasePlayerCell.h>

@class GKTurnBasedMatch, GKTurnBasedParticipant, NSButton, NSImageView, NSLayoutConstraint, NSTextField;

@interface GKTurnParticipantCell : GKBasePlayerCell
{
    BOOL _isDetail;
    GKTurnBasedMatch *_match;
    GKTurnBasedParticipant *_participant;
    SEL _detailPressedAction;
    NSTextField *_topLabel;
    NSTextField *_bottomLabel;
    NSButton *_detailButton;
    NSImageView *_statusImageView;
    NSLayoutConstraint *_detailWidthConstraint;
    NSLayoutConstraint *_statusToDetailConstraint;
    NSLayoutConstraint *_nameToTopLabelConstraint;
    double _detailWidth;
    double _statusToDetailDistance;
    double _nameToTopLabelDistance;
    struct NSEdgeInsets _insets;
}

+ (id)itemHeightList;
+ (double)defaultRowHeight;
+ (void)registerCellClassesForCollectionView:(id)arg1;
@property double nameToTopLabelDistance; // @synthesize nameToTopLabelDistance=_nameToTopLabelDistance;
@property double statusToDetailDistance; // @synthesize statusToDetailDistance=_statusToDetailDistance;
@property double detailWidth; // @synthesize detailWidth=_detailWidth;
@property NSLayoutConstraint *nameToTopLabelConstraint; // @synthesize nameToTopLabelConstraint=_nameToTopLabelConstraint;
@property NSLayoutConstraint *statusToDetailConstraint; // @synthesize statusToDetailConstraint=_statusToDetailConstraint;
@property NSLayoutConstraint *detailWidthConstraint; // @synthesize detailWidthConstraint=_detailWidthConstraint;
@property NSImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property NSButton *detailButton; // @synthesize detailButton=_detailButton;
@property NSTextField *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property NSTextField *topLabel; // @synthesize topLabel=_topLabel;
@property(nonatomic) struct NSEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) BOOL isDetail; // @synthesize isDetail=_isDetail;
@property(nonatomic) SEL detailPressedAction; // @synthesize detailPressedAction=_detailPressedAction;
@property(retain, nonatomic) GKTurnBasedParticipant *participant; // @synthesize participant=_participant;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (id)viewForPopover;
- (void)detailPressed:(id)arg1;
- (void)configureForDetail;
- (void)configureForMatch;
- (void)configureContextMenu:(id)arg1;
- (void)didUpdateModel;
- (BOOL)matchWantsLocalPlayerAttention;
- (void)dealloc;
- (void)awakeFromNib;

@end

