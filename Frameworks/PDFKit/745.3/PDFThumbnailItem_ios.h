//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <PDFKit/PDFKitPlatformThumbnailItem-Protocol.h>

@class CALayer, PDFPage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PDFThumbnailItem_ios : UICollectionReusableView <PDFKitPlatformThumbnailItem>
{
    UIImageView *_imageView;
    UILabel *_textField;
    BOOL _horizontalModeStyle;
    PDFPage *_page;
    CALayer *_borderEffect;
}

@property(retain) UILabel *textField; // @synthesize textField=_textField;
@property(retain) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
@property(nonatomic) __weak CALayer *borderEffect; // @synthesize borderEffect=_borderEffect;
@property(nonatomic) __weak PDFPage *page; // @synthesize page=_page;
@property(nonatomic) BOOL horizontalModeStyle;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

