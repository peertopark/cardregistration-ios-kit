//
//  MPAPIClient.h
//  mangopay
//

#import <Foundation/Foundation.h>

@interface MPAPIClient : NSObject

- (instancetype)initWithCard:(NSDictionary*)infoObject;
- (void)appendCardInfo:(NSString*)cardNumber cardExpirationDate:(NSString*)cardExpirationDate cardCvx:(NSString*)cardCvx;
- (void)registerCard:(void (^)(NSDictionary *response, NSError* error)) completionHandler;

// UTILS
+ (NSString*)NSStringFromQueryParameters:(NSDictionary*)queryParameters;
+ (NSURL*)NSURLByAppendingQueryParameters:(NSURL*)URL  queryParameters:(NSDictionary*)queryParameters;
+ (NSDictionary*)objectFromJSONdata:(NSData*)data;

@end
