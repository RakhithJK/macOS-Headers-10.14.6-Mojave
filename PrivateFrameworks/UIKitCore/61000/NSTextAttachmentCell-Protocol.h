//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSLayoutManager, NSTextAttachment, NSTextContainer, UIView;

@protocol NSTextAttachmentCell <NSObject>
- (NSTextAttachment *)attachment;
- (void)setAttachment:(NSTextAttachment *)arg1;
- (struct CGPoint)cellBaselineOffset;
- (struct CGSize)cellSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(UIView *)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(NSLayoutManager *)arg4;

@optional
- (void)drawWithFrame:(struct CGRect)arg1 inView:(UIView *)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(UIView *)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGRect)cellFrameForTextContainer:(NSTextContainer *)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
@end

