//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TImageView.h"

@interface TTagsImageView : TImageView
{
    _Bool _dimmed;
    long long _backgroundStyle;
    vector_12bd641b _tags;
    _Bool _inBatchUpdate;
}

@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic, getter=isInBatchUpdate) _Bool inBatchUpdate; // @synthesize inBatchUpdate=_inBatchUpdate;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateTagsImage;
- (void)setTags:(const vector_12bd641b *)arg1;
- (vector_12bd641b)tags;
- (_Bool)isSelected;
- (void)initCommon;

@end

