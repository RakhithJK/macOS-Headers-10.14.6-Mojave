//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSNibConnector.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSDictionary, NSString;

@interface NSNibBindingConnector : NSNibConnector <NSCoding>
{
    NSString *_binding;
    NSString *_keyPath;
    NSDictionary *_options;
    struct __nibBindingConnectorFlags {
        unsigned int _hasEstablishedConnection:1;
        unsigned int _reservedNibBindingConnector:31;
    } _nibBindingConnectorFlags;
    NSNibBindingConnector *_previousConnector;
}

+ (void)initialize;
- (id)description;
- (void)instantiateWithObjectInstantiator:(id)arg1;
- (void)establishConnection;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (id)_previousNibBindingConnector;
- (void)_setPreviousNibBindingConnector:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (id)keyPath;
- (void)setKeyPath:(id)arg1;
- (id)binding;
- (void)setBinding:(id)arg1;
- (void)_updateLabel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_updateForVersion:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

