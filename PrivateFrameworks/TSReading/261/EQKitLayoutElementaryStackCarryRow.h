//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/EQKitLayoutElementaryStackDigitRow.h>

#import <TSReading/EQKitLayoutElementaryStackRow-Protocol.h>

@class NSString;

@interface EQKitLayoutElementaryStackCarryRow : EQKitLayoutElementaryStackDigitRow <EQKitLayoutElementaryStackRow>
{
    vector_e38595b5 mCrossouts;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)populateMaxColumnWidths:(__wrap_iter_8fb6ff7c)arg1;
- (int)crossoutAtColumnIndex:(unsigned long long)arg1;
- (id)initWithChildren:(id)arg1 decimalPoint:(unsigned long long)arg2 position:(long long)arg3 followingSpace:(double)arg4 crossouts:(const vector_e38595b5 *)arg5;

// Remaining properties
@property(readonly, nonatomic) long long alignmentShift;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long firstColumnIndex;
@property(readonly, nonatomic) double followingSpace;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL spansStack;
@property(readonly) Class superclass;

@end

