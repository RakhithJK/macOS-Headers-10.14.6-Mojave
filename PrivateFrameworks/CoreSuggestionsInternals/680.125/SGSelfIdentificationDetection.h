//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGSelfIdentificationDetection : NSObject
{
    NSString *_name;
    NSString *_context;
    struct _NSRange _contextRange;
}

@property(nonatomic) struct _NSRange contextRange; // @synthesize contextRange=_contextRange;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

