//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FBAXMLNode : NSObject
{
    NSString *_name;
    NSString *_content;
    NSDictionary *_attributes;
    NSArray *_children;
}

@property(retain) NSArray *children; // @synthesize children=_children;
@property(retain) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain) NSString *content; // @synthesize content=_content;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithXMLNodePtr:(struct _xmlNode *)arg1;

@end

