//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface NSDebugString : NSString
{
    NSString *string;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)initWithString:(id)arg1;

@end

