//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MCURLMatch : NSObject
{
    NSString *_urlString;
    struct _NSRange _range;
}

@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)initWithRange:(struct _NSRange)arg1 urlString:(id)arg2;

@end

