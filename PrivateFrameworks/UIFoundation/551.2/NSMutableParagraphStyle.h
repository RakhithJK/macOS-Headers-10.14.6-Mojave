//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIFoundation/NSParagraphStyle.h>

@class NSArray;

@interface NSMutableParagraphStyle : NSParagraphStyle
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property long long headerLevel; // @dynamic headerLevel;
@property float tighteningFactorForTruncation; // @dynamic tighteningFactorForTruncation;
@property float hyphenationFactor; // @dynamic hyphenationFactor;
@property long long baseWritingDirection; // @dynamic baseWritingDirection;
- (void)setLineBreakStrategy:(unsigned long long)arg1;
- (void)setUsesOpticalAlignment:(BOOL)arg1;
- (void)setAllowsHangingPunctuation:(BOOL)arg1;
- (void)_setLineBoundsOptions:(unsigned long long)arg1;
@property(copy) NSArray *tabStops; // @dynamic tabStops;
- (void)removeTabStop:(id)arg1;
- (void)addTabStop:(id)arg1;
- (void)_mutateTabStops;
@property BOOL allowsDefaultTighteningForTruncation; // @dynamic allowsDefaultTighteningForTruncation;
@property(copy) NSArray *textLists; // @dynamic textLists;
@property(copy) NSArray *textBlocks; // @dynamic textBlocks;
@property double defaultTabInterval; // @dynamic defaultTabInterval;
@property double paragraphSpacingBefore; // @dynamic paragraphSpacingBefore;
@property double lineHeightMultiple; // @dynamic lineHeightMultiple;
@property unsigned long long lineBreakMode; // @dynamic lineBreakMode;
@property double maximumLineHeight; // @dynamic maximumLineHeight;
@property double minimumLineHeight; // @dynamic minimumLineHeight;
@property double firstLineHeadIndent; // @dynamic firstLineHeadIndent;
@property double tailIndent; // @dynamic tailIndent;
@property double headIndent; // @dynamic headIndent;
@property unsigned long long alignment; // @dynamic alignment;
@property double paragraphSpacing; // @dynamic paragraphSpacing;
@property double lineSpacing; // @dynamic lineSpacing;
- (void)setParagraphStyle:(id)arg1;

@end

