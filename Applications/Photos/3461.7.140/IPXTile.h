//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "PXReusableObject-Protocol.h"

@class PFCanceler;

@interface IPXTile : NSView <PXReusableObject>
{
    id _itemId;
    PFCanceler *_canceler;
}

@property(retain, nonatomic) PFCanceler *canceler; // @synthesize canceler=_canceler;
@property(retain, nonatomic) id itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)applyGeometry:(struct PXTileGeometry)arg1 userData:(id)arg2;
- (void)setLayerContents:(struct CGImage *)arg1;

@end

