//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/NSCopying-Protocol.h>

@class NSString;

@interface SXComponentTextRules : NSObject <NSCopying>
{
    BOOL _shouldHyphenate;
    BOOL _isSelectable;
    BOOL _allowsScrollPositionRestore;
    double _fontResizingTresholdFactor;
    double _fontSizeConstant;
    double _lineHeightConstant;
    double _dropCapConstant;
    long long _textFlow;
    NSString *_fontTextStyle;
}

+ (id)headingTextRules;
+ (id)titleTextRules;
+ (id)smallTextRules;
+ (id)bodyTextRules;
+ (id)defaultTextRules;
@property(copy, nonatomic) NSString *fontTextStyle; // @synthesize fontTextStyle=_fontTextStyle;
@property(nonatomic) long long textFlow; // @synthesize textFlow=_textFlow;
@property(nonatomic) BOOL allowsScrollPositionRestore; // @synthesize allowsScrollPositionRestore=_allowsScrollPositionRestore;
@property(nonatomic) BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property(nonatomic) BOOL shouldHyphenate; // @synthesize shouldHyphenate=_shouldHyphenate;
@property(nonatomic) double dropCapConstant; // @synthesize dropCapConstant=_dropCapConstant;
@property(nonatomic) double lineHeightConstant; // @synthesize lineHeightConstant=_lineHeightConstant;
@property(nonatomic) double fontSizeConstant; // @synthesize fontSizeConstant=_fontSizeConstant;
@property(nonatomic) double fontResizingTresholdFactor; // @synthesize fontResizingTresholdFactor=_fontResizingTresholdFactor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

