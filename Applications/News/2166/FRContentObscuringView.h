//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FRArticleMarkingStateProvider-Protocol.h"

@class FRNoAdView, NSString, UIButton, UILabel;

@interface FRContentObscuringView : UIView <FRArticleMarkingStateProvider>
{
    BOOL _saved;
    BOOL _liked;
    BOOL _disliked;
    BOOL _muted;
    BOOL _offensive;
    UILabel *_titleLabel;
    UIButton *_showButton;
    long long _mode;
    FRNoAdView *_noAdView;
    double _titleLabelLeftRightMargin;
    NSString *_headlineID;
    NSString *_articleID;
    struct UIEdgeInsets _contentInset;
}

+ (BOOL)debugDeletedCells;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(nonatomic) BOOL offensive; // @synthesize offensive=_offensive;
@property(nonatomic) BOOL muted; // @synthesize muted=_muted;
@property(nonatomic) BOOL disliked; // @synthesize disliked=_disliked;
@property(nonatomic) BOOL liked; // @synthesize liked=_liked;
@property(nonatomic) BOOL saved; // @synthesize saved=_saved;
@property(copy, nonatomic) NSString *headlineID; // @synthesize headlineID=_headlineID;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) double titleLabelLeftRightMargin; // @synthesize titleLabelLeftRightMargin=_titleLabelLeftRightMargin;
@property(retain, nonatomic) FRNoAdView *noAdView; // @synthesize noAdView=_noAdView;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIButton *showButton; // @synthesize showButton=_showButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

