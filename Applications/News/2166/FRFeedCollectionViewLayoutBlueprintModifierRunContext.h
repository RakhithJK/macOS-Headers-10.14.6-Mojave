//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FRFeedCollectionViewLayoutBlueprintModifierType;

@interface FRFeedCollectionViewLayoutBlueprintModifierRunContext : NSObject
{
    BOOL _cancelled;
    id <FRFeedCollectionViewLayoutBlueprintModifierType> _modifier;
}

@property(nonatomic) __weak id <FRFeedCollectionViewLayoutBlueprintModifierType> modifier; // @synthesize modifier=_modifier;
@property(nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id)initWithModifier:(id)arg1;

@end

