//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CorePDF/CPChunk.h>

#import <CorePDF/CPDisposable-Protocol.h>
#import <CorePDF/CPGraphicUser-Protocol.h>

__attribute__((visibility("hidden")))
@interface CPTable : CPChunk <CPDisposable, CPGraphicUser>
{
    struct CGRect tableBounds;
    unsigned int rowCount;
    double *rowY;
    unsigned int columnCount;
    double *columnX;
    struct CGColor *backgroundColor;
    unsigned int backgroundGraphicCount;
    id *backgroundGraphics;
    unsigned int usedGraphicCount;
    BOOL disposed;
}

@property(readonly, nonatomic) unsigned int backgroundGraphicCount; // @synthesize backgroundGraphicCount;
@property(readonly, nonatomic) double *columnX; // @synthesize columnX;
@property(readonly, nonatomic) double *rowY; // @synthesize rowY;
@property(readonly, nonatomic) struct CGRect tableBounds; // @synthesize tableBounds;
- (unsigned int)usedGraphicCount;
- (void)incrementUsedGraphicCount;
- (id)backgroundGraphicAtIndex:(unsigned int)arg1;
- (void)setBackgroundGraphics:(id)arg1;
- (struct CGColor *)backgroundColor;
@property(nonatomic) unsigned int columnCount;
@property(nonatomic) unsigned int rowCount;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithBounds:(struct CGRect)arg1;

@end

