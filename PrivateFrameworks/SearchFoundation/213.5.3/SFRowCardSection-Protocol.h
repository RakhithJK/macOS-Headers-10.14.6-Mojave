//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFColor, SFImage, SFRichText;

@protocol SFRowCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFRichText *trailingSubtitle;
@property(retain, nonatomic) SFRichText *leadingSubtitle;
@property(nonatomic) BOOL cardPaddingBottom;
@property(copy, nonatomic) NSNumber *valueWeight;
@property(nonatomic) BOOL valueNoWrap;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSNumber *keyWeight;
@property(nonatomic) BOOL keyNoWrap;
@property(copy, nonatomic) NSString *key;
@property(retain, nonatomic) SFImage *attributionImage;
@property(copy, nonatomic) NSString *rightText;
@property(copy, nonatomic) NSString *leftText;
@property(retain, nonatomic) SFRichText *trailingText;
@property(retain, nonatomic) SFRichText *leadingText;
@property(nonatomic) BOOL imageIsRightAligned;
@property(retain, nonatomic) SFImage *image;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
@end

