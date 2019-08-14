//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSMutableDictionary, NSString;

@interface MTUIRenderedHandViewFactory : NSObject
{
    NSBundle *_resourcesBundle;
    NSString *_imagePath;
    struct CGPoint _offset;
    struct CGSize _scale;
    struct CGPDFPage *_page;
    struct CGSize _viewSize;
    BOOL _allowCaching;
    NSMutableDictionary *_angleCache;
    unsigned long long _registeredClientsCount;
}

+ (void)flushAllCaches;
+ (void)unregisterForFactory:(id)arg1;
+ (id)registerForFactoryWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4 allowCaching:(BOOL)arg5;
+ (id)keyForBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4;
@property(nonatomic) unsigned long long registeredClientsCount; // @synthesize registeredClientsCount=_registeredClientsCount;
@property(readonly, nonatomic) BOOL allowCaching; // @synthesize allowCaching=_allowCaching;
- (void).cxx_destruct;
- (void)flushCache;
- (id)imageForAngle:(double)arg1 viewSize:(struct CGSize)arg2;
- (id)renderImageForAngle:(double)arg1 viewSize:(struct CGSize)arg2;
@property(readonly, nonatomic) NSString *key;
- (void)dealloc;
- (id)initWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4 allowCaching:(BOOL)arg5;

@end

