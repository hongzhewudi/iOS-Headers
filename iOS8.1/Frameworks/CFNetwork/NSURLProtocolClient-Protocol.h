//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCachedURLResponse, NSData, NSError, NSURLAuthenticationChallenge, NSURLProtocol, NSURLRequest, NSURLResponse;

@protocol NSURLProtocolClient <NSObject>
- (void)URLProtocol:(NSURLProtocol *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)URLProtocol:(NSURLProtocol *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)URLProtocol:(NSURLProtocol *)arg1 didFailWithError:(NSError *)arg2;
- (void)URLProtocolDidFinishLoading:(NSURLProtocol *)arg1;
- (void)URLProtocol:(NSURLProtocol *)arg1 didLoadData:(NSData *)arg2;
- (void)URLProtocol:(NSURLProtocol *)arg1 didReceiveResponse:(NSURLResponse *)arg2 cacheStoragePolicy:(unsigned int)arg3;
- (void)URLProtocol:(NSURLProtocol *)arg1 cachedResponseIsValid:(NSCachedURLResponse *)arg2;
- (void)URLProtocol:(NSURLProtocol *)arg1 wasRedirectedToRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
@end
