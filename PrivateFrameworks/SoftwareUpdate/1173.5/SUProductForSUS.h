//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SUProduct;

@interface SUProductForSUS : NSObject
{
    SUProduct *_product;
}

- (id)descriptionDataReturningMIMEType:(id *)arg1;
- (unsigned long long)downloadSize;
- (long long)restartAction;
- (id)displayVersion;
- (id)displayName;
- (void)dealloc;
- (id)initWithProductKey:(id)arg1 catalogProductDictionary:(id)arg2 localization:(id)arg3 error:(id *)arg4;

@end

