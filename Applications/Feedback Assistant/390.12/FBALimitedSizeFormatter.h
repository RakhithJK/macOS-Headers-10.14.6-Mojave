//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBASingleLineFormatter.h"

@interface FBALimitedSizeFormatter : FBASingleLineFormatter
{
    unsigned long long _maximumLength;
}

@property unsigned long long maximumLength; // @synthesize maximumLength=_maximumLength;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (id)initWithMaximumLength:(unsigned long long)arg1;

@end

