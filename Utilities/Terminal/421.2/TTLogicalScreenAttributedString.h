//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@class TTLogicalScreenString;

@interface TTLogicalScreenAttributedString : NSAttributedString
{
    TTLogicalScreenString *_screenString;
}

+ (id)attributedStringWithLogicalScreenStringNoCopy:(id)arg1;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (void)dealloc;
- (id)initWithLogicalScreenStringNoCopy:(id)arg1;

@end

