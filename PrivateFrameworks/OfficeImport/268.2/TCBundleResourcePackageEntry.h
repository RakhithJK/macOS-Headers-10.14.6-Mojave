//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OISFUZipEntry;

@interface TCBundleResourcePackageEntry : NSObject
{
    OISFUZipEntry *mZipEntry;
    struct _xmlDoc *mXmlDocument;
}

- (void).cxx_destruct;
- (struct _xmlDoc *)xmlDocument;
- (id)data;
- (void)dealloc;
- (id)initWithZipEntry:(id)arg1;

@end

