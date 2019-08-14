//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FRFeedCollectionViewLayoutBlueprintVisibility : NSObject
{
    BOOL _isVisible;
    BOOL _isRunningInBackground;
    NSArray *_visibleIndexPaths;
    struct CGPoint _contentOffset;
    struct CGRect _visibleBounds;
}

@property(readonly, nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(retain, nonatomic) NSArray *visibleIndexPaths; // @synthesize visibleIndexPaths=_visibleIndexPaths;
@property(nonatomic) BOOL isRunningInBackground; // @synthesize isRunningInBackground=_isRunningInBackground;
@property(nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
- (void).cxx_destruct;
- (id)initWithVisibleBounds:(struct CGRect)arg1 isVisible:(BOOL)arg2 visibleIndexPaths:(id)arg3 contentOffset:(struct CGPoint)arg4 isRunningInBackground:(BOOL)arg5;

@end

