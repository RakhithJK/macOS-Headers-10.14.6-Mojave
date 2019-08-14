//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSTMatrix : NSObject
{
    long long fRows;
    long long fColumns;
    double **fValues;
}

+ (id)crossProduct:(id)arg1 b:(id)arg2;
- (id)invert;
- (void)multiplyRowBy:(long long)arg1 x:(double)arg2;
- (void)swapRows:(long long)arg1 b:(long long)arg2;
- (void)addScaledRowToRow:(double)arg1 a:(long long)arg2 b:(long long)arg3;
- (void)setValue:(double)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (double)valueAtRow:(long long)arg1 columns:(long long)arg2;
- (void)makeIdentity;
- (void)resizeWithRows:(long long)arg1 columns:(long long)arg2;
- (void)dealloc;
- (id)initWitRows:(long long)arg1 columns:(long long)arg2;

@end

