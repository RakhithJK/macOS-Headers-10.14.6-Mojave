//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface NUScript : NSObject
{
    NSString *_source;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)description;
- (BOOL)load:(out id *)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithSource:(id)arg1;
- (id)init;

@end
