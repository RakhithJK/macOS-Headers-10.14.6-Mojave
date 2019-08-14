//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSDMatchingAlgorithm : NSObject
{
    long long *mCostMatrix;
    char *mMaskMatrix;
    char *mIsStarInColumn;
    char *mIsStarInRow;
    char *mIsColCovered;
    char *mIsRowCovered;
    id *mObjectMapping;
    long long mMatrixDimension;
    long long mZ0Row;
    long long mZ0Col;
    NSMutableArray *mResults;
}

+ (id)bestMatchesFromArray:(id)arg1;
- (id)p_bestMatchesFromArray:(id)arg1;
- (int)p_doStep6;
- (int)p_doStep5;
- (int)p_doStep4;
- (int)p_step4IndexOfStarredZeroInRow:(int)arg1;
- (BOOL)p_step4FindAZeroAndReturnRow:(int *)arg1 column:(int *)arg2;
- (int)p_doStep3;
- (int)p_doStep2;
- (int)p_doStep1;
- (void)p_deallocateMatrices;
- (void)p_allocateMatrices;

@end
