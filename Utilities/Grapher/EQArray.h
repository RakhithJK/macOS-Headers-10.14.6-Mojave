//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EQZone.h"

@interface EQArray : EQZone
{
    unsigned long long mRows;
    unsigned long long mColumns;
}

+ (id)arrayWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;
- (void)appendOperationToString:(id)arg1;
- (BOOL)scanner:(id)arg1 scanHeaderForFormat:(unsigned long long)arg2;
- (id)arrayName;
- (unsigned long long)columns;
- (unsigned long long)rows;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)shallConcatenateIfBackspace:(unsigned long long)arg1;
- (void)appendToString:(id)arg1 info:(id)arg2;
- (long long)contentLeft:(BOOL)arg1 content:(unsigned long long)arg2;
- (long long)contentAbove:(BOOL)arg1 content:(unsigned long long)arg2;
- (void)setContentPosition;
- (id)zoneAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)initWithParent:(id)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3;
- (unsigned long long)elements;
- (id)LaTeXExpression;

@end

