//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _MKMultiPartStringComponent : NSObject
{
    NSAttributedString *_attributedString;
    struct _NSRange _originalRange;
    struct _NSRange _range;
}

@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) struct _NSRange originalRange; // @synthesize originalRange=_originalRange;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;

@end

