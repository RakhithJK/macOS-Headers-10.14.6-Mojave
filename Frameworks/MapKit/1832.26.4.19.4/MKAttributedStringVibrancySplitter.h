//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface MKAttributedStringVibrancySplitter : NSObject
{
    NSAttributedString *_markedAttributedString;
    NSAttributedString *_vibrantAttributedString;
    NSAttributedString *_nonvibrantAttributedString;
    BOOL _hasMixedVibrancy;
    NSAttributedString *_attributedString;
}

@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) BOOL hasMixedVibrancy; // @synthesize hasMixedVibrancy=_hasMixedVibrancy;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSAttributedString *nonvibrantAttributedString;
@property(readonly, nonatomic) NSAttributedString *vibrantAttributedString;
- (void)calculateAttributedStringsIfNecessary;
- (id)initWithAttributedString:(id)arg1 appearance:(id)arg2;

@end

