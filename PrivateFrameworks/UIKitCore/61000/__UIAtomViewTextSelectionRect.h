//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface __UIAtomViewTextSelectionRect : UITextSelectionRect
{
    BOOL containsStart;
    BOOL containsEnd;
    BOOL isVertical;
    long long writingDirection;
    struct CGRect rect;
}

@property(nonatomic) BOOL isVertical; // @synthesize isVertical;
@property(nonatomic) BOOL containsEnd; // @synthesize containsEnd;
@property(nonatomic) BOOL containsStart; // @synthesize containsStart;
@property(nonatomic) long long writingDirection; // @synthesize writingDirection;
@property(nonatomic) struct CGRect rect; // @synthesize rect;

@end

