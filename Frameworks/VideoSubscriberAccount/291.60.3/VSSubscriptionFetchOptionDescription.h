//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>

@class NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface VSSubscriptionFetchOptionDescription : NSObject <NSCopying>
{
    BOOL _container;
    NSString *_key;
    id _defaultValue;
    unsigned long long _minCount;
    Class _allowedClass;
    NSPredicate *_allowedValuePredicate;
}

@property(copy, nonatomic) NSPredicate *allowedValuePredicate; // @synthesize allowedValuePredicate=_allowedValuePredicate;
@property(retain, nonatomic) Class allowedClass; // @synthesize allowedClass=_allowedClass;
@property(nonatomic) unsigned long long minCount; // @synthesize minCount=_minCount;
@property(nonatomic, getter=isContainer) BOOL container; // @synthesize container=_container;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

