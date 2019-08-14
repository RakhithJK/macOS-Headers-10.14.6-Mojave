//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@interface TSKShuffleMapping : NSObject <NSCopying>
{
    unsigned short mStartIndex;
    unsigned short mEndIndex;
    unsigned short *mMapping;
    BOOL mIsVertical;
    BOOL mIsMoveOperation;
    unsigned short mFirstMovedIndex;
    unsigned short mDestinationIndexForMove;
    unsigned short mNumberOfIndicesMoved;
}

@property(readonly, nonatomic) unsigned short *mapping; // @synthesize mapping=mMapping;
@property(readonly, nonatomic) unsigned short endIndex; // @synthesize endIndex=mEndIndex;
@property(readonly, nonatomic) unsigned short startIndex; // @synthesize startIndex=mStartIndex;
- (void)swapIndex:(unsigned short)arg1 withIndex:(unsigned short)arg2;
- (void)remove:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2;
- (void)insert:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2 insertingBefore:(BOOL)arg3;
- (void)enumerateMappingRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)isMove;
- (BOOL)isVertical;
- (unsigned short)reverseMapIndex:(unsigned short)arg1;
- (unsigned short)mapIndex:(unsigned short)arg1;
- (id)copyInverse;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned short mappingSize; // @dynamic mappingSize;
- (void)dealloc;
- (id)initForMovedIndicesStartingAtIndex:(unsigned short)arg1 destinationIndex:(unsigned short)arg2 numberOfIndices:(unsigned short)arg3 vertical:(BOOL)arg4;
- (id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2;
- (id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2 mapping:(unsigned short *)arg3;

@end
