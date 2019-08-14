//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLMutableDenseVector;

@interface PMLDenseMatrix : NSObject
{
    PMLMutableDenseVector *_data;
    unsigned long long _numberOfRows;
    unsigned long long _numberOfColumns;
}

+ (id)denseMatrixFromNumbers:(id)arg1;
+ (id)denseMatrixFromData:(id)arg1 numberOfRows:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(readonly, nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
- (void).cxx_destruct;
- (void)processValuesInPlaceWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateNonZeroValuesWithBlock:(CDUnknownBlockType)arg1;
- (float *)values;
- (id)initWithData:(id)arg1 numberOfRows:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3;

@end

