//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSDLayout, TSUColor, TSWPLayoutManager, TSWPLineHintCollection;
@protocol TSWPLayoutTarget, TSWPStyleProvider, TSWPTextWrap;

@protocol TSWPLayoutOwner <NSObject>
- (TSWPLineHintCollection *)lineHintsForTarget:(TSDLayout<TSWPLayoutTarget> *)arg1;
- (id <TSWPTextWrap>)textWrapper;
- (void)layoutManager:(TSWPLayoutManager *)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(TSWPLayoutManager *)arg1;
- (BOOL)caresAboutStorageChanges;

@optional
- (BOOL)shouldAllowFinishingPartionedAttachmentLayout;
- (TSUColor *)textColorOverride;
- (BOOL)invalidateOnExactTextRangeLayout;
- (BOOL)forceWesternLineBreaking;
- (id <TSWPStyleProvider>)styleProvider;
@end

