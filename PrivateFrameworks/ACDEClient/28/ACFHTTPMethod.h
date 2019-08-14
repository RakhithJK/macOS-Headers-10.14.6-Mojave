//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ACFHTTPMethod : NSObject
{
    NSString *_name;
    NSDictionary *_headerFields;
    NSData *_body;
}

+ (id)methodWithName:(id)arg1 headerFields:(id)arg2 bodyPropertyList:(id)arg3 error:(id *)arg4;
+ (id)methodWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3;
+ (id)method;
@property(retain) NSData *body; // @synthesize body=_body;
@property(retain) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3;
- (id)init;
- (void)dealloc;

@end
